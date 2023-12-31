//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLStreamCompression : NSObject
{
    int _status;	// 8 = 0x8
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;	// 16 = 0x10
    int _operation;	// 56 = 0x38
    CDUnknownBlockType _handler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000348c48
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2 flags:(int)arg3;	// IMP=0x001000000034897b
- (_Bool)didFinishProcessing;	// IMP=0x001000000034895a
- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0010000000348945
- (void)dealloc;	// IMP=0x001000000034890b
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2;	// IMP=0x001000000034888b

@end

