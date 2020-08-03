

#ifndef VOIDPICK_H_
#define VOIDPICK_H_

//picks an array for a position
template <typename T>
T pick(void* v, int pos){
	return *((T*)v + pos);
}

//picks a single pointer for data
template <typename T>
T pick(void* v){
	return *((T*)v);
}



#endif /* VOIDPICK_H_ */
