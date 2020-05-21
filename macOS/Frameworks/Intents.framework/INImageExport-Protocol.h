//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSData, NSString, NSURL;

@protocol INImageExport <NSObject, JSExport>
+ (id)imageWithURL:(NSURL *)arg1;
+ (id)imageWithImageData:(NSData *)arg1;
+ (id)imageNamed:(NSString *)arg1;
@property(copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath;
@property(copy, nonatomic, setter=_setName:) NSString *_name;
@property(copy, nonatomic, setter=_setUri:) NSURL *_uri;
@property(copy, nonatomic, setter=_setImageData:) NSData *_imageData;
@property(readonly, copy, nonatomic) NSString *_identifier;
- (id)init;
@end

