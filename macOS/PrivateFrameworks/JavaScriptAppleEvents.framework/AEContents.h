//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AEContents : NSObject
{
    unsigned int _code;
    unsigned int _classCode;
    NSString *_name;
}

+ (id)contentsWithName:(id)arg1 code:(unsigned int)arg2 classCode:(unsigned int)arg3;
- (void).cxx_destruct;
@property unsigned int classCode; // @synthesize classCode=_classCode;
@property unsigned int code; // @synthesize code=_code;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 code:(unsigned int)arg2 classCode:(unsigned int)arg3;

@end

