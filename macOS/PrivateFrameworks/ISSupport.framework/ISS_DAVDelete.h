//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DAVDelete : ISS_DAVRequest
{
}

+ (id)deleteRequestWithSession:(id)arg1 path:(id)arg2;
+ (id)deleteRequestWithURL:(id)arg1;
- (void)finalizeOperation;
- (id)dependenciesList;
- (id)initDeleteWithSession:(id)arg1 path:(id)arg2;
- (id)initDeleteWithURL:(id)arg1;

@end

