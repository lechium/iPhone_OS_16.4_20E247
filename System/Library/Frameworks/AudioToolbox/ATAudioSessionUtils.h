//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ATAudioSessionUtils : NSObject
{
}

+ (id)getPort:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x00800000000398d4
+ (id)getPorts:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x00800000000396c6
+ (id)getRouteStringFromAVASRouteDescription:(id)arg1;	// IMP=0x0080000000039414
+ (id)getRouteDescriptionFromAVASRouteDescription:(id)arg1;	// IMP=0x008000000003929a
+ (id)outputPortTypes;	// IMP=0x0080000000038ebc
+ (id)inputPortTypes;	// IMP=0x0080000000038c75
+ (id)modes;	// IMP=0x00800000000387bc
+ (id)categories;	// IMP=0x00800000000384b7
+ (id)KVOProperties;	// IMP=0x00800000000384aa
+ (id)getMappedObjectOf:(id)arg1 inside:(id)arg2 ofType:(int)arg3;	// IMP=0x0080000000038280
+ (struct __CFString *)getAudioSessionPortType:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x0080000000038187
+ (unsigned int)getAudioSessionMode:(id)arg1;	// IMP=0x00800000000380bd
+ (id)getAVASMode:(unsigned int)arg1;	// IMP=0x0080000000038008
+ (unsigned int)getAudioSessionCategory:(id)arg1;	// IMP=0x0080000000037f3e
+ (id)getAVASCategory:(unsigned int)arg1;	// IMP=0x0080000000037e89
+ (unsigned int)getAudioSessionProperty:(id)arg1;	// IMP=0x0080000000037dbf
+ (id)getAVASProperty:(unsigned int)arg1;	// IMP=0x0080000000037d0a
+ (unsigned long long)getCategoryOptionFromPropertyID:(unsigned int)arg1;	// IMP=0x0080000000037bfd

@end

