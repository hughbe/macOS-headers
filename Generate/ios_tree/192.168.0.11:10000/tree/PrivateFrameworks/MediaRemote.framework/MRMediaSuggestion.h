/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaSuggestion : NSObject {
    MRArtwork * _artwork;
    NSString * _bundleID;
    INPlayMediaIntent * _intent;
}

@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, retain) MRArtwork *artwork;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) INPlayMediaIntent *intent;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_callbackQueue;
- (void)_confirmIntent:(id)arg1 intentHandler:(id /* block */)arg2;
- (void)_handleIntentWithProxy:(id)arg1 completion:(id /* block */)arg2;
- (id)_identifierForQueuePlayback;
- (id)_intentForQueuePlayback;
- (bool)_originatedFromSystemMediaApp;
- (void)_playIntent:(id)arg1 completion:(id /* block */)arg2;
- (void)_playIntent:(id)arg1 onEndpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_playIntentRemotelyAsPlaybackQueue:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_playIntentRemotelyWithAirPlay:(id)arg1 destinationDevices:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)_processedIntent;
- (void)_updateActiveEndpointAndPlayIntent:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)artist;
- (id)artwork;
- (id)bundleID;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIntent:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (void)playOnDeviceWithUID:(id)arg1 completion:(id /* block */)arg2;
- (void)playOnEndpoint:(id)arg1 completion:(id /* block */)arg2;
- (void)playWithCompletion:(id /* block */)arg1;
- (void)setArtwork:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setIntent:(id)arg1;
- (id)title;

@end
