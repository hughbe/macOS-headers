//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface IMXMLParserContext : NSObject
{
    NSData *_inContentAsData;
}

@property(readonly, retain) NSData *inContentAsData; // @synthesize inContentAsData=_inContentAsData;
@property(readonly, retain) NSArray *resultsForLogging;
@property(readonly, retain) NSString *name;
- (id)inContent;
- (void)reset;
- (void)dealloc;
- (id)initWithContentAsData:(id)arg1;
- (id)initWithContent:(id)arg1;

@end

