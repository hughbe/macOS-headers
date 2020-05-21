//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsCore/DDLocation.h>

@class NSString;

@interface DDCompilationNote : DDLocation
{
    NSString *_message;
    int _level;
}

+ (id)noteAtLocation:(id)arg1 ofLevel:(int)arg2 withFormat:(id)arg3;
@property(readonly) int level; // @synthesize level=_level;
@property(readonly) NSString *message; // @synthesize message=_message;
- (void)dealloc;
- (id)initWithLocation:(id)arg1 message:(id)arg2 level:(int)arg3;
- (id)initWithFileName:(id)arg1 position:(struct __DDExpressionPosition)arg2 message:(id)arg3 level:(int)arg4;

@end

