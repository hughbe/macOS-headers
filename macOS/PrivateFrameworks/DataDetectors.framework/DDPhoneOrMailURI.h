//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DDPhoneOrMailURI : NSObject
{
    NSString *_value;
    BOOL _isMailScheme;
    BOOL _isHttpScheme;
    BOOL _isFileScheme;
}

+ (id)URIWithString:(id)arg1;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isFile;
- (BOOL)isHttp;
- (BOOL)isPhone;
- (BOOL)isMail;
- (id)initWithString:(id)arg1;

@end

