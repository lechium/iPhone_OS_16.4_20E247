//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface WKDownloadProgress : NSProgress
{
    struct RetainPtr<NSURLSessionDownloadTask> m_task;	// 8 = 0x8
    struct WeakPtr<WebKit::Download, WTF::DefaultWeakPtrImpl> m_download;	// 16 = 0x10
    RefPtr_585b44c9 m_sandboxExtension;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000925c4b
- (void).cxx_destruct;	// IMP=0x0000000000925bd4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000925ab2
- (void)dealloc;	// IMP=0x0000000000925a38
- (void)_updateProgressExtendedAttributeOnProgressFile;	// IMP=0x0000000000925914
- (void)unpublish;	// IMP=0x000000000092588d
- (void)publish;	// IMP=0x0000000000925837
- (id)initWithDownloadTask:(id)arg1 download:(void *)arg2 URL:(id)arg3 sandboxExtension:(RefPtr_585b44c9)arg4;	// IMP=0x00000000009255e7
- (void)performCancel;	// IMP=0x0000000000925520

@end
