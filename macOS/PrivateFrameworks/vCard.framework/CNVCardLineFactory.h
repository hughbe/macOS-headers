//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardLineFactory-Protocol.h>

@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>
{
}

+ (id)version21LineFactory;
+ (id)version30LineFactory;
- (id)versionPlaceholderLine;
- (id)lineWithLiteralValue:(id)arg1;
- (id)dataLineWithName:(id)arg1 value:(id)arg2;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2;
- (id)stringLineWithName:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

