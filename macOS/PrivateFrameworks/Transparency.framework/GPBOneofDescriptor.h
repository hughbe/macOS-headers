//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPBOneofDescriptor : NSObject
{
    const char *name_;
    NSArray *fields_;
    SEL caseSel_;
}

@property(readonly, nonatomic) NSArray *fields; // @synthesize fields=fields_;
- (id)fieldWithName:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithName:(const char *)arg1 fields:(id)arg2;

@end

