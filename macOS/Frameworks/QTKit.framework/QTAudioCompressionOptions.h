//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QTKit/QTCompressionOptions.h>

@class NSData;

@interface QTAudioCompressionOptions : QTCompressionOptions
{
    struct AudioStreamBasicDescription _asbd;
    NSData *_channelLayout;
    NSData *_magicCookie;
}

+ (id)compressionOptionsWithDescription:(id)arg1;
- (id)magicCookie;
- (id)channelLayout;
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1 channelLayout:(id)arg2 magicCookie:(id)arg3;

@end

