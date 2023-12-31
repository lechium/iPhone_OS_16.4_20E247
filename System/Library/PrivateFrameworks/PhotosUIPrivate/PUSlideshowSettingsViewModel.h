//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUViewModel.h"

@class NSDictionary, OKProducerPreset, PUSlideshowMediaItem;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewModel : PUViewModel
{
    _Bool _shouldRepeat;	// 8 = 0x8
    _Bool _musicOn;	// 9 = 0x9
    double _stepDuration;	// 16 = 0x10
    OKProducerPreset *_preset;	// 24 = 0x18
    PUSlideshowMediaItem *_mediaItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000047bcd4
@property(nonatomic, getter=isMusicOn) _Bool musicOn; // @synthesize musicOn=_musicOn;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(retain, nonatomic) PUSlideshowMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) OKProducerPreset *preset; // @synthesize preset=_preset;
@property(nonatomic) double stepDuration; // @synthesize stepDuration=_stepDuration;
- (unsigned long long)hash;	// IMP=0x000000000047bbc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047bb1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047b96f
@property(readonly, nonatomic) NSDictionary *propertyDictionary;
- (id)initWithPropertyDictionary:(id)arg1;	// IMP=0x000000000047ae89
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x000000000047ae5a
- (void)registerChangeObserver:(id)arg1;	// IMP=0x000000000047ae2b
- (id)currentChange;	// IMP=0x000000000047ade4
- (id)newViewModelChange;	// IMP=0x000000000047add3

@end

