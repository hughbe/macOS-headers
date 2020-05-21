//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class NSCharacterSet, NSLocale;

@protocol CHRecognizing <NSObject>
@property(nonatomic) BOOL shouldEnableCachingIfAvailable;
@property(nonatomic) struct CGSize minimumDrawingSize;
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property(nonatomic) unsigned long long maxRecognitionResultCount;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(nonatomic) int contentType;
@property(readonly, nonatomic) int recognitionMode;
- (id)initWithMode:(int)arg1 locale:(NSLocale *)arg2;
@end

