//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVMove : ISS_DAVRequest
{
}

+ (id)moveRequestWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 sourceToken:(id)arg4 destinationToken:(id)arg5;
- (void)finalizeOperation;
- (id)initMoveWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 sourceToken:(id)arg4 destinationToken:(id)arg5;

@end

