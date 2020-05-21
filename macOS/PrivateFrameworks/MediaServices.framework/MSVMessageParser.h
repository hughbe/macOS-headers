//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol MSVMessageParserDelegate;

@interface MSVMessageParser : NSObject
{
    id <MSVMessageParserDelegate> _delegate;
    NSMutableData *_unhandledPartialObjectData;
    long long _unhandledObjectDataExpectedLength;
    NSMutableData *_unhandledPartialData;
}

+ (id)createHeader:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *unhandledPartialData; // @synthesize unhandledPartialData=_unhandledPartialData;
@property(nonatomic) long long unhandledObjectDataExpectedLength; // @synthesize unhandledObjectDataExpectedLength=_unhandledObjectDataExpectedLength;
@property(retain, nonatomic) NSMutableData *unhandledPartialObjectData; // @synthesize unhandledPartialObjectData=_unhandledPartialObjectData;
@property(nonatomic) __weak id <MSVMessageParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegate:(id)arg1;
- (void)processData:(id)arg1;

@end

