//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Suggestions/SGTSuggester.h>

@class CKStoreClient, CKStoreRequest, SGTInput;

@interface FRSuggester : SGTSuggester
{
    SGTInput *_input;
    CKStoreClient *_storeClient;
    CKStoreRequest *_storeRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKStoreRequest *storeRequest; // @synthesize storeRequest=_storeRequest;
@property(retain, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
@property(retain, nonatomic) SGTInput *input; // @synthesize input=_input;
- (void)_getHints;
- (id)initWithStoreClient:(id)arg1;

@end

