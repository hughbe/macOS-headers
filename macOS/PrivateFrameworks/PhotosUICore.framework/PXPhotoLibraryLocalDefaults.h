//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class PHPhotoLibraryAppPrivateData;

@interface PXPhotoLibraryLocalDefaults : PXObservable
{
    PHPhotoLibraryAppPrivateData *_appPrivateData;
}

- (void).cxx_destruct;
- (void)removeIdentifier:(id)arg1 forKey:(id)arg2;
- (void)addIdentifier:(id)arg1 forKey:(id)arg2;
- (id)identifiersForKey:(id)arg1;
- (void)setIdentifiers:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)_notifyObserversDidChangeValueForKey:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end

