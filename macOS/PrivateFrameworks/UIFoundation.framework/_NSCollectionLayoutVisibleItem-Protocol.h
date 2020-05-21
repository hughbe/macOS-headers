//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSCollectionLayoutVisibleItem-Protocol.h>
#import <UIFoundation/NSObject-Protocol.h>

@class NSIndexPath, NSString;

@protocol _NSCollectionLayoutVisibleItem <NSObject, NSCollectionLayoutVisibleItem>
@property(readonly, nonatomic) NSString *representedElementKind;
@property(readonly, nonatomic) long long representedElementCategory;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic) struct CATransform3D transform3D;
@property(nonatomic) struct CGAffineTransform transform;
@property struct CGPoint center;
@property(getter=isHidden) BOOL hidden;
@property long long zIndex;
@property double alpha;
@end

