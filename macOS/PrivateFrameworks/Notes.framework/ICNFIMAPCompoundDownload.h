//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFIMAPDownload.h>

@class NSArray, NSMutableArray;

@interface ICNFIMAPCompoundDownload : ICNFIMAPDownload
{
    NSMutableArray *_subdownloads;
}

- (void).cxx_destruct;
- (unsigned int)expectedLength;
- (unsigned int)bytesFetched;
- (id)error;
- (BOOL)isComplete;
- (void)processResults;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)removeSubdownload:(id)arg1;
- (void)addSubdownload:(id)arg1;
- (void)removeObjectFromSubdownloadsAtIndex:(unsigned long long)arg1;
- (id)objectInSubdownloadsAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long countOfSubdownloads;
@property(readonly, copy) NSArray *subdownloads;
- (id)description;
- (id)createCopy;

@end

