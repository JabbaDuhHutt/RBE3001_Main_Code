/**
* @brief Declaration for use in other files.
*
* @todo Again, do not forget to use @code pidConst pidConsts; @endcode
* in any file you access them in!
*/
extern pidConst pidConsts;

/** 
 * @brief Sets the Kp, Ki, and Kd values for 1 link.
 * @details to set the values, use the following style
 * @code pidConst.Kp = 1.3; @endcode
 * @param link The link you want to set the values for (H or L).
 * @param Kp Proportional value.
 * @param Ki Integral value.
 * @param Kd Derivative value.
 *
 */




void setConst(char link, float Kp, float Ki, float Kd){
  pidConst p;
  if(link == "H"){ // H Link
    p.Kp_H = Kp;
    p.Ki_H = Ki;
    p.Kd_H = Kd;
  }
  if(link == "L"){ // L Link
    p.Kp_L = Kp;
    p.Ki_L = Ki;
    p.Kd_L = Kd;
  }
  else{
    printf("Error, Link must be H or L \n"); // if the wrong character is entered
  }
}

/** 
 * @brief Calculate the PID value.
 * @param  link Which link to calculate the error for (Use 'U' and 'L').
 * @param setPoint The desired position of the link.
 * @param actPos The current position of the link.
 *
 */
signed int calcPID(char link, int setPoint, int actPos){
  double P, I, D; 
  signed int output;
  float error;
  error = setPoint - actPos;
  if(link == "H"){ // H link
    P = p.Kp_H * error;
    I = p.Ki_H * (I + error * time);
    D = p.Kd_H * ((newError - error)/(time))
    output = P + I + D;
  }
  if(link == "L"){ //L link
    P = p.Kp_L * error;
    I = p.Ki_L * (I + error * time);
    D = p.Kd_L * ((newError - error)/(time))
    output = P + I + D;
  }
  else{
    printf("ERROR, Link must be H or L \n")
  }
  return output;
}