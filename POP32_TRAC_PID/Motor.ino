void Forward() {
  motor(1, 50);
  motor(2, 50);
}

void Backward() {
  motor(1, -50);
  motor(2, -50);
}

void turnLeft() {
  motor(1, 50);
  motor(2, -50);
}

void turnRight() {
  motor(1, -50);
  motor(2, 50);
}

void Stop() {
  motor(1, 0);
  motor(2, 0);
}

void Uturn() {
  motor(1, -50);
  motor(2, 50);
  delay(1000);
}
