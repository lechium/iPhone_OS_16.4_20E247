//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWMBase : NSObject
{
    double _privacyTimeOffset;	// 8 = 0x8
}

- (int)getSampleCount;	// IMP=0x0020000000ce8296
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000ce8290
- (double)makeSafeCFAbsoluteTime:(double)arg1;	// IMP=0x0010000000ce8271
- (void)setPrivacyTimeOffset:(double)arg1;	// IMP=0x0010000000ce8266
- (id)metadata;	// IMP=0x0010000000ce825e
- (void)dealloc;	// IMP=0x0000000000ce822f
- (void)setupListener;	// IMP=0x0010000000ce8229
- (void)teardownListeners;	// IMP=0x0010000000ce8223
- (id)init;	// IMP=0x0010000000ce81f4

@end

