using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeMoves : MonoBehaviour {

	//data types for variables
	public float rotationSpeed = .1f;

	// Called before Start
	//Initialise vallues of the gameobject 
	void Awake(){

	}
		
	// Make connections to other gameobjects
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 rotation = new Vector3 (0.0f,Time.deltaTime*rotationSpeed,0.0f);
		transform.Rotate(rotation);

		//copied the current position
		Vector3 pos = transform.position;

		//alter the y
		pos.y = Mathf.Sin (Time.time * .5f) * 4.0f;

		//copy the altered position back into the transform
		transform.position = pos; //new Vector3 (10.0f, 0.0f, 0.0f);
	}

	// Called after all other updates
	// Good for if you have something that depends on all the physics of the other gameobjects for something to happen
	void LateUpdate() {

	}
}
