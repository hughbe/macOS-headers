//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OBCapabilities : NSObject
{
    BOOL _preventURLDataDetection;
    BOOL _preventOpeningSafari;
}

+ (id)sharedCapabilities;
@property(nonatomic) BOOL preventOpeningSafari; // @synthesize preventOpeningSafari=_preventOpeningSafari;
@property(nonatomic) BOOL preventURLDataDetection; // @synthesize preventURLDataDetection=_preventURLDataDetection;
- (BOOL)isWAPI;

@end

