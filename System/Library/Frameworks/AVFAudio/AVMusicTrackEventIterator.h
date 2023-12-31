//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVMusicTrackEventIterator : NSObject
{
    struct MusicTrackEventIteratorImpl *_impl;	// 8 = 0x8
}

- (_Bool)hasCurrentEvent;	// IMP=0x00000000000d82d5
- (_Bool)hasNextEvent;	// IMP=0x00000000000d8287
- (_Bool)hasPreviousEvent;	// IMP=0x00000000000d8239
- (void)deleteEvent;	// IMP=0x00000000000d81e9
- (_Bool)setEventTime:(double)arg1;	// IMP=0x00000000000d8187
- (_Bool)setEventInfo:(unsigned int)arg1 data:(const void *)arg2;	// IMP=0x00000000000d8121
- (void)getEventInfo:(double *)arg1 outEventType:(unsigned int *)arg2 eventData:(void **)arg3 dataSize:(unsigned int *)arg4;	// IMP=0x00000000000d8104
- (int)previousEvent;	// IMP=0x00000000000d80b5
- (int)nextEvent;	// IMP=0x00000000000d8066
- (void)seek:(double)arg1;	// IMP=0x00000000000d8030
- (id)initWithImpl:(struct MusicTrackEventIteratorImpl *)arg1;	// IMP=0x00000000000d7fca

@end

