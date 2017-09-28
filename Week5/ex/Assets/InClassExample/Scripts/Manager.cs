using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Manager : MonoBehaviour {

	public GameObject myPrefab;
	public GameObject target;

	// Use this for initialization
	void Start () {

		MySphere.globalSpeed = 20.0f;
		MySphere.globalTarget = target;
		MySphere.globalYawing = 90.0f;

		StartCoroutine (CreateSpheres());

	}

	IEnumerator CreateSpheres(){
		for (int i=0; i<20; i++){
			
			Vector3 pos = new Vector3 (Random.Range(-5,5), Random.Range(-5,5), Random.Range(-5,5));

			GameObject newObject = Instantiate (myPrefab);
			newObject.transform.position = pos;

			//Debug.Log(newObject.GetComponent<MySphere>().globalSpeed();

			//wait for x seconds to continue
			yield return new WaitForSeconds(.5f);
		}
		
	}
	// Update is called once per frame
	void Update () {
		
	}
}
