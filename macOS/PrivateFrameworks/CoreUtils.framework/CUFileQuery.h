//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUDictionaryCodable-Protocol.h>

@class NSString;

@interface CUFileQuery : NSObject <CUDictionaryCodable>
{
    CDUnknownBlockType _completionHandler;
    NSString *_path;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)description;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

