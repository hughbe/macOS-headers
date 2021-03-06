/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCItemIdentifierImplementation : NSObject <MPCItemIdentifier, NSCopying> {
    NSString * _contentItemID;
    long long  _repeatIndex;
}

@property (nonatomic, copy) NSString *contentItemID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long repeatIndex;
@property (readonly) Class superclass;

+ (id)identifierForMFQueuePlayerItem:(id)arg1;

- (void).cxx_destruct;
- (id)contentItemID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithContentItemID:(id)arg1 repeatIndex:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)repeatIndex;
- (void)setContentItemID:(id)arg1;
- (void)setRepeatIndex:(long long)arg1;

@end
