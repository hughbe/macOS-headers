//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString, NSURL;

@interface _WKActivatedElementInfo : NSObject
{
    struct RetainPtr<NSURL> _URL;
    struct RetainPtr<NSURL> _imageURL;
    struct RetainPtr<NSString> _title;
    struct IntPoint _interactionLocation;
    struct RetainPtr<NSString> _ID;
    struct RefPtr<WebKit::ShareableBitmap, WTF::DumbPtrTraits<WebKit::ShareableBitmap>> _image;
    struct RetainPtr<NSImage> _nsImage;
    BOOL _animatedImage;
    long long _type;
    struct CGRect _boundingRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSImage *image;
@property(readonly, nonatomic) BOOL isAnimatedImage;
@property(readonly, nonatomic) struct IntPoint _interactionLocation;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *URL;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 location:(const struct IntPoint *)arg4 title:(id)arg5 ID:(id)arg6 rect:(struct CGRect)arg7 image:(struct ShareableBitmap *)arg8 userInfo:(id)arg9;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 location:(const struct IntPoint *)arg4 title:(id)arg5 ID:(id)arg6 rect:(struct CGRect)arg7 image:(struct ShareableBitmap *)arg8;

@end

