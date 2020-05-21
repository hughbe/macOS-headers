//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioFileWriter-Protocol.h>

@class NSMutableData, NSString, NSURL;

@interface CSEncryptedAudioFileWriter : NSObject <CSAudioFileWriter>
{
    NSURL *_fileUrl;
    NSMutableData *_writeBuffer;
    unsigned long long _sampleByteDepth;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sampleByteDepth; // @synthesize sampleByteDepth=_sampleByteDepth;
@property(retain, nonatomic) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property(retain, nonatomic) NSURL *fileUrl; // @synthesize fileUrl=_fileUrl;
- (BOOL)endAudio;
- (BOOL)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2;
- (id)initWithFileUrl:(id)arg1 sampleByteDepth:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

