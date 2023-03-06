
function Sum(array,target){
    let Target=target;
    for (let i=0;i<array.length;i++){
        for(let k=0;k<array.length;k++){
           const sum=array[i]+array[k]
           if(i!=k && sum==Target){
            console.log([array[i],array[k]]);
            return [array[i],array[k]];
           }
        }
    }
    console.log([])
    return []
}
Sum([3,5,-4,8,11,1,-1,6],10)

function heapSum(array,target){
    let hasmap=new Set()
    for(let num of array){
        let compliment=target-num
        if(hasmap.has(compliment)){
            console.log(compliment,num)
            return [compliment,num]
        }
        console.log(num)
        hasmap.add(num)
    }
}
heapSum([3,5,-4,8,11,1,-1,6],10)