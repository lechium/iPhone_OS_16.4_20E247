//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface TXRDefaultBuffer : NSObject
{
    NSMutableData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000017b0
- (id)map;	// IMP=0x000000000000175a
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x00000000000016ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000016b6
- (void)dealloc;	// IMP=0x0000000000001687
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000000160d
- (id)initWithData:(id)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x0000000000001590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

