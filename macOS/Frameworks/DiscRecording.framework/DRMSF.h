//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface DRMSF : NSNumber
{
    long long _value;
}

+ (id)msfWithString:(id)arg1;
+ (id)msfWithFrames:(unsigned int)arg1;
+ (id)msf;
+ (void)initialize;
+ (id)msfFromString:(id)arg1 couldBeByteLength:(BOOL)arg2;
- (BOOL)isEqualToMSF:(id)arg1;
- (id)msfBySubtracting:(id)arg1;
- (id)msfByAdding:(id)arg1;
- (unsigned int)sectors;
- (unsigned int)frames;
- (unsigned int)seconds;
- (unsigned int)minutes;
- (id)descriptionWithFormat:(id)arg1;
- (id)description;
- (unsigned long long)unsignedLongValue;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (id)initWithString:(id)arg1;
- (id)initWithFrames:(unsigned int)arg1;
- (id)init;

@end

