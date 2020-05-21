//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/NSCopying-Protocol.h>

@class NSString;

@interface WDBrowsingContext : NSObject <NSCopying>
{
    NSString *_frameHandle;
    NSString *_windowHandle;
}

+ (id)browsingContextWithWindowHandle:(id)arg1 frameHandle:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *windowHandle; // @synthesize windowHandle=_windowHandle;
- (unsigned long long)hash;
- (BOOL)isEqualToBrowsingContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isToplevel) BOOL toplevel;
@property(readonly, copy, nonatomic) NSString *frameHandle;
- (id)initWithWindowHandle:(id)arg1 frameHandle:(id)arg2;

@end

