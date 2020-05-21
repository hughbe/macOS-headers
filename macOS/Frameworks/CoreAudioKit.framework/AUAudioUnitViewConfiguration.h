//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/NSSecureCoding-Protocol.h>

@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding>
{
    BOOL _hostHasController;
    double _width;
    double _height;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) BOOL hostHasController; // @synthesize hostHasController=_hostHasController;
@property(readonly) double height; // @synthesize height=_height;
@property(readonly) double width; // @synthesize width=_width;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(BOOL)arg3;

@end

