function sequenceValidation(array,sequnce){
    let arrayin=0;
    let seqin=0
    while(arrayin<array.lengt && seqin<sequnce.lengt){
        if(array[arrayin]==sequnce[seqin]){
            seqin++
        }

        arrayin++
    }
    return (seqin==sequnce.length)
}