//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface ABNamedImageWrapper : NSObject
{
    NSImage *_image;
    NSString *_name;
}

+ (id)namedImageWrapperWithImage:(id)arg1 name:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;

@end

