//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVRemoteCore/NSObject-Protocol.h>

@class NSError, NSString, _TVRCHMServiceWrapper;

@protocol _TVRCHMServiceWrapperDelegate <NSObject>
- (void)service:(_TVRCHMServiceWrapper *)arg1 updatedName:(NSString *)arg2;
- (void)disconnectedFromService:(_TVRCHMServiceWrapper *)arg1 error:(NSError *)arg2;
- (void)connectedToService:(_TVRCHMServiceWrapper *)arg1;
@end

