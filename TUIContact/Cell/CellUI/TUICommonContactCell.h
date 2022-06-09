/******************************************************************************
 *
 *  本文件声明了通用联系人单元，负责显示
 *
 ******************************************************************************/
#import <UIKit/UIKit.h>
#import "TUICommonContactCellData.h"
#import "TUICommonModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TUICommonContactCell : TUICommonTableViewCell

@property UIImageView *avatarView;
@property UILabel *titleLabel;

@property (readonly) TUICommonContactCellData *contactData;

- (void)fillWithData:(TUICommonContactCellData *)contactData;

@end

NS_ASSUME_NONNULL_END
