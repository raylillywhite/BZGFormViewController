//
//  BZGFormInfoCell.h
//
//  https://github.com/benzguo/BZGFormViewController
//

#import <UIKit/UIKit.h>

@interface BZGFormInfoCell : UITableViewCell

/// The cell's label.
@property (nonatomic, strong) UILabel *infoLabel;

/**
 * Initializes a BZGFormInfoCell with the given text.
 */
- (id)initWithText:(NSString *)text;

@end
