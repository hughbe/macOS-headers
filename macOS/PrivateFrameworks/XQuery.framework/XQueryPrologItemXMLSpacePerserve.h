//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XQuery/XQueryPrologItemBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryPrologItemXMLSpacePerserve : NSObject <XQueryPrologItemBehavior>
{
    BOOL value;
    long long line;
}

+ (id)preserve:(BOOL)arg1 atLine:(long long)arg2;
@property(readonly, copy) NSString *description;
- (void)XQueryUpdateProlog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

