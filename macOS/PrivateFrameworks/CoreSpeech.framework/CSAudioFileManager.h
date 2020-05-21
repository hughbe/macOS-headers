//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioFileManager : NSObject
{
}

+ (id)audioFileWriterForAttentiveSiri;
+ (void)pruneNumberOfLogFilesTo:(unsigned long long)arg1;
+ (void)removeLogFilesOlderThanNDays:(float)arg1;
+ (id)_getDateLabel;
+ (id)_createAudioFileWriterWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)createSelectiveChannelAudioFileWriterWithChannelBitset:(unsigned long long)arg1;
+ (id)createAudioFileWriterFromWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterForRemoteVADWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2;
+ (void)generateDeviceAudioLogging:(id)arg1 speechId:(id)arg2;
+ (id)_sharedAudioLoggingQueue;

@end

