//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSImage, NSPathComponentCell, NSString, NSURL;

@interface NSPathControlItem : NSObject
{
    NSPathComponentCell *_secretCell;
}

+ (id)itemWithCell:(id)arg1;
- (void)setURL:(id)arg1;
@property(readonly) NSURL *URL;
@property(retain) NSImage *image;
@property(copy) NSAttributedString *attributedTitle;
@property(copy) NSString *title;
- (id)pathComponentCell;
- (void)dealloc;
- (id)initWithPathComponentCell:(id)arg1;
- (id)init;

@end

