//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class BSDescriptionBuilder, NSString;

@protocol BSDescriptionProviding <NSObject>
- (BSDescriptionBuilder *)succinctDescriptionBuilder;
- (NSString *)succinctDescription;
- (BSDescriptionBuilder *)descriptionBuilderWithMultilinePrefix:(NSString *)arg1;
- (NSString *)descriptionWithMultilinePrefix:(NSString *)arg1;
@end

