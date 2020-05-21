//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DEPublication : NSObject
{
    BOOL _disabled;
    NSDictionary *_distributions;
    NSString *_lastModified;
}

+ (BOOL)write:(id)arg1 date:(id)arg2 disabled:(BOOL)arg3 toURL:(id)arg4 keyId:(unsigned long long)arg5 multipart:(BOOL)arg6;
+ (id)dateToLastModified:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSDictionary *distributions; // @synthesize distributions=_distributions;
- (id)init;
- (id)initWithDistributions:(id)arg1 lastModified:(id)arg2 disabled:(BOOL)arg3;

@end

