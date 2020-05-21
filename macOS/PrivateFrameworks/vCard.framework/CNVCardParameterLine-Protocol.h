//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <vCard/CNVCardLine-Protocol.h>

@class NSString;
@protocol CNVCardLine, CNVCardLineSerialization;

@protocol CNVCardParameterLine <CNVCardLine>
- (void)serializeValueWithStrategy:(id <CNVCardLineSerialization>)arg1;
- (BOOL)canSerializeWithStrategy:(id <CNVCardLineSerialization>)arg1;
- (void)addGroupedLine:(id <CNVCardLine>)arg1 withCounter:(long long *)arg2;
- (void)insertParameterWithName:(NSString *)arg1 value:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)addParameterWithName:(NSString *)arg1 value:(NSString *)arg2;
@end

