var ptA = 350;
var ptB = 700;
var y = 40;
var moveX = ptA;
var t = 0;
var dir =1;


function setup() {
  createCanvas(window.innerWidth, window.innerHeight);
}

function draw() {
  background(110,0,255,.5);

  t+=.02 * dir;
  if( t <= 0 || t >= 1) {
  dir *= -1;
  }
  var pct = pow(t,5.5);

  var c = color(215,215,215);

  pct = t*t;
  drawMotion(80, pct);

  pct = t*t+1;
  drawMotion(120, pct);

  pct = t*t*t;
  drawMotion(160, pct);

  pct = t*t*t+1;
  drawMotion(200, pct);

  pct = t*t*t*t;
  drawMotion(240, pct);

  pct = 1 + t * t * t * t;
  drawMotion(280, pct);

  pct = t * t * t * t * t;
  drawMotion(320, pct);

  pct = 1 + t * t * t * t * t;
  drawMotion(360, pct);
}

function drawMotion(yOffset, pct){
  moveX = (1-pct) * ptA + pct * ptB;
  line(ptA,y + yOffset*1.3,ptB,y + yOffset*1.3);
  ellipse(moveX, y + yOffset*1.3, 20, 20);
}
