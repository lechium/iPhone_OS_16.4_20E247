//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKEditCommand : NSObject
{
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>> _command;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000003bbbbf
- (void).cxx_destruct;	// IMP=0x00000000003bbb9e
- (void *)command;	// IMP=0x00000000003bbb94
- (id)initWithWebEditCommandProxy:(void *)arg1;	// IMP=0x00000000003bbb31

@end
