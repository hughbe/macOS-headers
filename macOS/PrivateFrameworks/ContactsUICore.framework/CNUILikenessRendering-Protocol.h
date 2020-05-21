//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable, CNUIImage, CNUILikenessRenderingScope, NSArray, NSString, PRMonogramColor;
@protocol CNKeyDescriptor, CNScheduler;

@protocol CNUILikenessRendering <NSObject>
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
- (CNUIImage *)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNUIImage *)renderedBasicMonogramForString:(NSString *)arg1 color:(PRMonogramColor *)arg2 scope:(CNUILikenessRenderingScope *)arg3 prohibitedSources:(long long)arg4;
- (CNObservable *)renderedBasicMonogramFromString:(CNObservable *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedLikenessesForContacts:(NSArray *)arg1 scope:(CNUILikenessRenderingScope *)arg2 workScheduler:(id <CNScheduler>)arg3;
@end

