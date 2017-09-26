#pragma once  
  
#pragma warning(disable:4996)  
#include<cassert>  
#include<Windows.h>  
#include<string>  
#include<iostream>  
#include"Huffman.hpp"  

void TestCompress()  
{  
    HuffmanPress hft;  
    int begin = GetTickCount();  
//  hft.FilePress("test1.txt");  
    //hft.FilePress("git.txt");  
//  hft.FilePress("1.jpg");  
//  hft.FilePress("8.pdf");  
    //hft.FilePress("Input.BIG");  
    hft.FilePress("listen.mp3");  
    int end = GetTickCount();  
    cout << end-begin << endl;  
}  
  
void TestUnCompress()  
{  
    HuffmanPress hf;  
    int begin = GetTickCount();  
//  hf.FileUncompress("test1.txt.huffman");  
//  hf.FileUncompress("1.jpg.huffman");  
//  hf.FileUncompress("git.txt.huffman");  
//  hf.FileUncompress("8.pdf.huffman");  
    //hf.FileUncompress("Input.BIG.huffman");  
    hf.FileUncompress("listen.mp3.huffman");  
    int end = GetTickCount();  
    cout << end - begin << endl;  
}