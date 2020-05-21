//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioServerApplication/ASAControl.h>

@interface ASALevelControl : ASAControl
{
}

- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (float)decibelFromScalar:(float)arg1;
- (float)scalarFromDecibel:(float)arg1;
@property(readonly, nonatomic) struct AudioValueRange decibelRange; // @dynamic decibelRange;
@property(readonly, nonatomic) float maximumDecibelValue; // @dynamic maximumDecibelValue;
@property(readonly, nonatomic) float minimumDecibelValue; // @dynamic minimumDecibelValue;
@property(nonatomic) float decibelValue; // @dynamic decibelValue;
@property(nonatomic) float scalarValue; // @dynamic scalarValue;

@end

