float converte_float(const char *str){
	float num_float, frac, div_frac;
	char cop_str[30], separ[2] = ".", *parte;
	
	memcpy(cop_str, str, strlen(str));
	
	parte = strtok(cop_str, separ);
	num_float = atoi(parte);
	
	parte = strtok(NULL, separ);
	if(parte == NULL)
		parte = "0";
	frac = atoi(parte);
	
	div_frac = strlen(parte);
	div_frac = powf(10, div_frac);
	num_float += (frac / div_frac);
	
	return num_float;
};