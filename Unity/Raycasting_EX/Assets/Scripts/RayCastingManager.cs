using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayCastingManager : MonoBehaviour {

	Transform mainCam;
	public GameObject particlePrefab;

	// Use this for initialization
	void Start () {
		mainCam = Camera.main.transform;
	}
	
	// Update is called once per frame
	void Update () {
		RaycastHit hit;

		bool isHit = Physics.Raycast(mainCam.position,mainCam.forward,out hit);
		if (isHit && hit.collider.tag == "HitObject") {
			Debug.Log ("Raycast Collision!");

			//dsable kinematic on rigidbody
			//hit.collider.GetComponent<Rigidbody>().isKinematic = false;

			//instantiate (replace) prefab at collider position
			Instantiate(particlePrefab, hit.collider.transform.position, Quaternion.identity);
			//destroy the gameobject we collided with
			Destroy(hit.collider.gameObject);
		}

		// Just to debug it
		Vector3 pos = new Vector3 (
			mainCam.position.x,
			mainCam.position.y - .25F,
			mainCam.position.z);

		Debug.DrawRay (pos, mainCam.forward * 200F, Color.green);
	}
}
